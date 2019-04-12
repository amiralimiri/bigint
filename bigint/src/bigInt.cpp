#include "bigInt.h"

bigInt::bigInt(string s="")
{
	n=s.length();
	for (int i=0;i<n;i++)
		arr[i]=s[n-1-i];
}

bigInt::~bigInt()
{
}

void bigInt::insert(char x)
{
    arr[n++]=x;
}

void bigInt::show()
{
	for(int i=n-1;i>=0;i--)
	{
		cout<<arr[i];
	}
}

int bigInt::get_n()
{
	return n;
}
void bigInt::set_n(int x)
{
	n=x;
}

bigInt bigInt::operator+( bigInt& b )
{
    int next=0,h,w,j;
    bigInt c("");
    if(n<=b.get_n())
    {
        h=n;
        j=b.get_n();
    }
	else
    {
        h=b.get_n();
        j=n;
    }
    int i=0;
	for(i=0;i<h;i++)
    {
        w=next+arr[i]+b.arr[i]-96;
        if(w>=10)
		{
			next=1;
			w%=10;
			c.insert(w+48);
		}
		else
		{
			next=0;
			c.insert(w+48);
		}
    }
    if (j==0)
        return c;

    if(n<=b.get_n())
    {
        for(;i<j;i++)
        {
            w=next+b.arr[i]-48;
            c.insert(w+48);
            next=0;
        }
    }
    else
    {
        for(;i<j;i++)
        {
            w=next+arr[i]-48;
            c.insert(w+48);
            next=0;
        }
    }
    return c;


}





//bigInt bigInt::operator+( bigInt& b )
//{
	//int h,j,next=0,w;
	/*char* ae;

	if(n<=b.get_n())
		h=n;
	else
		h=b.get_n();


	int i=0;*/
	//for(i=0;i<h;i++)
	/*{
		w=next+(int)arr[i]+(int)b.arr[i]-96;
		if(w>10)
		{
			next=1;
			w%=10;
			ae[i]=w+48;
		}
		else
		{
			next=0;
			ae[i]=w+48;
		}
	}*/
	//string aw=ae;
	//cout<<aw<<endl;
	//cout<<ae[0];
	//cout<<ae[1];
	//cout<<ae[2];
	/*if(n>=b.get_n())
	{
		for(;i<n;i++)
		{
			w=next+(int)arr[i]-48;
			next=0;
		}
	}
	else
	{
		for(;i<b.get_n();i++)
		{
			w=next+(int)b.arr[i]-48;
			next=0;
		}
	}*/
	//cout<<ae;
	//bigInt c(ae);
	//c.arr=ae;
	//c.set_n(ae.length());
	//c.show();
	//return c;
//}



/*if(arr[i]!='a' && b.arr[i]!='a')
		{
			w=(int)ae[i]+(int)arr[i]+(int)b.arr[i];
			if(w>10)
			{
				ae[i+1]='1';
				w%=10;
				ae[i]=w;
				j++;
			}
			else
			{
				ae[i]=w;
				j++;
			}
		}
		else
		{
			if(arr[i]=='a')
			{
				ae[i]=b.arr[i];
				j++;
			}
			else
			{
				ae[i]=arr[i];
				j++;
			}
		}*/
