using Microsoft.AspNetCore.Components.Web;
using Microsoft.AspNetCore.Components.WebAssembly.Hosting;
using Testa;
using Testa.Data;
using SqliteWasmHelper;
using Microsoft.EntityFrameworkCore;

var builder = WebAssemblyHostBuilder.CreateDefault(args);
builder.RootComponents.Add<App>("#app");
builder.RootComponents.Add<HeadOutlet>("head::after");

builder.Services.AddScoped(sp => new HttpClient { BaseAddress = new Uri(builder.HostEnvironment.BaseAddress) });
builder.Services.AddScoped<JsonService>();

builder.Services.AddScoped<SqliteService>();
builder.Services.AddSqliteWasmDbContextFactory<AppDbContext>(x => x.UseSqlite("Data Source =Testadb.sqlite3"));



await builder.Build().RunAsync();
