 #include <bits/stdc++.h>
 using namespace std;

 void sieve(long long n)


          {

              bool marked[n+1];
    memset(marked, true, sizeof(marked));



    for(long long i=4;i<=n;i+=2)

    {
        marked[i]=false;
    }


     for(long long i=3;i*i<=n;i++)
      {

          if(marked[i]==true)
          {



             for(long long j=i*i;j<=n;j+=i)
             {


                              marked[j]=false;



             }
          }
      }

      for(long long i=2;i<=n;i++)

          {if(marked[i])



              {cout<<i<<" ";}
          }



      cout<<endl;
      }

       int main()
      {
          long long n;
          cin>>n;
          sieve(n);
          return 0;
      }


