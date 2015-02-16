// EXAMPLE USAGE
int analogvalue = 0;
double tempC = 0;
char *message = "my name is spark";

void setup()
{
  // variable name max length is 12 characters long
  Spark.variable("analogvalue", &analogvalue, INT);
  Spark.variable("temp", &tempC, DOUBLE);
  Spark.variable("mess", message, STRING);
  pinMode(A1, INPUT);
}

void loop()
{
  // Read the analog value of the sensor (TMP36)
  analogvalue = analogRead(A1);
  //Convert the reading into degree celcius
  tempC = (((analogvalue * 3.3)/4095) - 0.5) * 100;
  delay(200);
}
