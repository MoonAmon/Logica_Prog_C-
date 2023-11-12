import scrapy


class PokeapiSpider(scrapy.Spider):
    name = "pokeapi"
    allowed_domains = ["pokeapi.co"]
    start_urls = ["https://pokeapi.co/api/v2/pokemon?limit=100"]

    def parse(self, response):
        data = response.json()
        for pokemon in data['pokeapi.co']:
            yield {
                'name': pokemon['name'],
                'url': pokemon['url']
            }
