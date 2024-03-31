void encrypt(char val[])
{
  //long unsigned size = sizeof(val);
	for(int i=0; i < 15; i++)
		val[i]+=2; // val[i] = val[i] + 2;
}

void decrypt(char val[])
{

//  long unsigned size = sizeof(val);
	for(int i=0; i < 15; i++)
		val[i]-=2;
}

