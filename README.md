# spark-core-web-variables
How to access the Spark Core or Photon variables using standard web pages. No Fancy frameworks or jQuery





Feb 16, 2015

Just found out that the spark uses GET instead or POST to work with variables. Give me a few days and I should have this working on web pages.


Note: When using the unsafe html files, only load them from your computer. Do not put them on the web since they will show your CoreID and Access_token values. You can change the access_token but I do not know how to change your CoreId




So, It does work. Strangely not how I expected using the access_token in the full form URL. I had to have the access_token as a regular posted variable sent with the form. Almost exactly like POSTing information.

I still have to improve the advanced json method. So far things look promising
