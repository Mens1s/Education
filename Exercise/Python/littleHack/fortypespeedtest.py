from selenium import webdriver
from selenium.webdriver.common.keys import Keys
import time
driver = webdriver.Chrome("chromedriver.exe")

driver.get("https://10fastfingers.com/typing-test/turkish")

time.sleep(7)
a = 1
while True:
    field = (f'//*[@id="row1"]/span[{a}]')
    text = driver.find_element_by_xpath(field).text
    driver.find_element_by_xpath('//*[@id="inputfield"]').send_keys(text+" ")
    a += 1
    
