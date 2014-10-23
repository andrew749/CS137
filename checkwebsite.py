import smtplib
import urllib3
import datetime
import time
from bs4 import BeautifulSoup
print("Initializing email app")
httpc = urllib3.PoolManager()
#checks if the hash of the current page has changed from last time
def checkWebsite(html1,html2):
	if(not html1 == html2):
		return True
	else:
		return False
oldhtml=httpc.request('GET', "http://store.apple.com/ca/browse/home/specialdeals/mac/mac_mini").read()
oldhtml=BeautifulSoup(oldhtml).find("div",{"id":"primary"})
def sendemail():
	server=smtplib.SMTP("smtp.gmail.com:587")
	server.starttls()
	server.login("andrewcod749@gmail.com","lcbzyxzlrlsboune")
	msg=str("There is a new mac mini available in the store")
	server.sendmail("andrewcod749@gmail.com","andrewcod749@gmail.com",msg);

while True:

	html=httpc.request('GET', "http://store.apple.com/ca/browse/home/specialdeals/mac/mac_mini").read()
	html=BeautifulSoup(html).find("div",{"id":"primary"})
	if(checkWebsite(html, oldhtml)):
	    print("found change")
	    sendemail()
	    oldhtml=html
	else:
                print("no changes at ",datetime.datetime.now())
	time.sleep(30)
