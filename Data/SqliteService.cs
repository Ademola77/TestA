using static System.Net.WebRequestMethods;
using SqliteWasmHelper;



namespace Testa.Data
{
    public class SqliteService
    {
        private readonly ISqliteWasmDbContextFactory<AppDbContext> dbFactory;

        public SqliteService(ISqliteWasmDbContextFactory<AppDbContext> dbFactory)
        {
            this.dbFactory = dbFactory;
        }

        public async Task<List<Person>> FetchData()
        {
            var ctx = await dbFactory.CreateDbContextAsync();

            return ctx.People.ToList();
        }

        public async Task<List<Person>> AddData(string fName, string sName)
        {
            var ctx = await dbFactory.CreateDbContextAsync();
            ctx.People.Add(new Person { FirstName = fName,Surname = sName });

            await ctx.SaveChangesAsync();
            return ctx.People.ToList();
        }

    }
}
