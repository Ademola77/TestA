using System.Net.Http.Json;

namespace Testa.Data
{
    public class JsonService
    {
        private readonly HttpClient http;

        public JsonService(HttpClient http)
        {
            this.http = http;
        }


        public async Task<List<Person>> FetchData()
        {
            var items =await http.GetFromJsonAsync<Person[]>("sample-data/Members.json");
            return items!.ToList();
        }

    }
}
