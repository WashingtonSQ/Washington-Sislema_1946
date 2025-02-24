#include <stdlib.h>
#include <time.h>
using namespace std;
namespace vectorn
{
    void llenar(int v[],int n,int ri,int rs=10){
        int i=0;
        for ( i = 0; i < n; i++)
        {
            v[i]=rand()%(rs-ri+1)+ri;
            //v[i]=ri + rand()%(rs+1-ri);
        }
        
    }
}
