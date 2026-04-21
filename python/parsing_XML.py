import xml.etree.ElementTree as ET

data = '''
<person>
    <name>Liu</name>
    <phone type = "intl">
        +1 121 232 4444
    </phone>
    <email hide = "yes"/>
</person>
'''

tree = ET.fromstring(data)
print("Name: ", tree.find('name').text)
print("Attr: ", tree.find("email").get("hide"))