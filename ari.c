#include <cs50.h>
string ari(string s)
{
	float cl = 0.0f, cw = 0.0f, cs = 0.0f;
	string a[] = {"Kindergarten","First/Second Grade","Third Grade","Fourth Grade","Fifth Grade","Sixth Grade","Seventh Grade","Eighth Grade","Ninth Grade","Tenth Grade","Eleventh Grade","Twelfth grade","College student","Professor"}; 
	int i, l, ari;
	l = strlen(s);
	for(i=0; i<l; i++)
	{
		if(isalnum(s[i]))
			cl++;
		if(s[i]==' ')
			cw++;
		if(s[i]=='.' || s[i]=='?' || s[i]=='!')
			cs++;
	}
	ari = ceil(4.71*(cl/cw) + 0.5*(cw/cs) - 21.43);
	return(a[ari-1]);
}
