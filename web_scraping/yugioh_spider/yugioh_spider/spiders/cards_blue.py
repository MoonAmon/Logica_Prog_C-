import scrapy
import json
import csv
import numpy as np


class CardsBlueSpider(scrapy.Spider):
    name = "cards_blue"
    allowed_domains = ["db.ygoprodeck.com"]
    start_urls = ["https://db.ygoprodeck.com/api/v7/cardinfo.php"]

    def parse(self, response):
        data = response.json()
        with open('all_cards.csv', 'w', newline='', encoding='utf-8') as csvfile:
            fieldnames = ['id','name','type','frameType','description','level','atk','def','race','attribute','archetype'] 
            writer = csv.DictWriter(csvfile, fieldnames=fieldnames)
            writer.writeheader()
            for card in data['data']:
                writer.writerow({
                    'id': card['id'],
                    'name': card['name'],
                    'type': card['type'],
                    'frameType': card['frameType'],
                    'description': card['desc'].replace(',', ' ').replace('\n', ' ').replace('\r', ' '),
                    'level': card.get('level',''),
                    'atk': card.get('atk', ''),
                    'def': card.get('def', ''),
                    'race': card['race'],
                    'attribute': card.get('attribute', ''),
                    'archetype': card.get('archetype', '') 
                })
                
