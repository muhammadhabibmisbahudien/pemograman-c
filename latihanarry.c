#include <stdio.h>

int main()
{
    int tinggiBadan[10]={175, 165, 166, 157, 184, 156, 163, 176, 171, 169};
    int max;
    int length=sizeof(tinggiBadan) / sizeof(*tinggiBadan);
    max=tinggiBadan[0];
    
    for (int i=0;i<length;i++)
    {
        if (tinggiBadan[i]>max )
        {
            max=tinggiBadan[i];
        }
    }
    printf ("nilai terbesar %d", max);
    
    
}
