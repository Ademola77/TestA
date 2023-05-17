using Microsoft.EntityFrameworkCore;

namespace Testa.Data
{
    public class AppDbContext:DbContext
    {
        public AppDbContext(DbContextOptions<AppDbContext> options):base(options)
        {

        }

        public DbSet<Person> People { get; set; } = null!;





    }
}
