# Python3 配置教程；
# https://www.bilibili.com/video/BV1yv41147rE?from=search&seid=1523766354698806570
# 其中包含安装python3.9: https://www.python.org/downloads/

# 创建虚拟环境
# python -m venv venv
# 激活虚拟环境
# .\venv\Scripts\activate
# 停用虚拟环境
# deactivate

# AREPL 用于实时自动执行py代码，右上角的橙色图标

# pip install requests
# python -m pip install --upgrade pip

import json
import requests

print("Hello World!")

items = json.loads('[{"id":1, "text":"Item 1"}, {"id":2, "text": "Item 2"}]')

for item in items:
  print(item['text'])
  #print(item['title']) # for debugger

response = requests.get('https://randomuser.me/api/?results=10')

data = response.json()

for user in data['results']:
  print(user['name']['first'])

# Python Docstring to quickly generate docstrings for functions.
# ctrl + shift + 2
def greet(greeting, name):  
  """Returns a greeting

  Args:
      greeting ([string]): A greet word
      name ([string]): A persons name

  Returns:
      [string]: A greeting with a name
  """
  return f'{greeting} {name}'

print(greet('Hello', 'World!'))
