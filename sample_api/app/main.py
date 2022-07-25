from flask import Flask, jsonify
import requests


app= Flask(__name__)



@app.route('/')
def index():
    url = 'https://api.coingecko.com/api/v3/simple/price?ids=dogecoin&vs_currencies=usd'
    response = requests.get(url)

    r_js = response.json()
    print(r_js)
    return jsonify(r_js['dogecoin']['usd'])