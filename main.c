#include <stdio.h>
#include <stdlib.h>

//randNum fonksiyonu tanýmlayýp fonksiyonda tanýmladýðým randArr dizisini döndürmesi için *p pointer parametresi tanýmladým.
int randNum(int *p)
{
    int randArr[10]; //10 elemanlý randArr adlý bir dizi tanýmladým.
    srand(time(NULL)); //Dizi elemanlarýnýn her seferinde farklý olmasý için srand fonksiyonunu kullandým.
    for(int i=1; i<=10; i++) //bu döngüyle dizi elemaný 10 olana kadar rastgele sayý üretmeyi amaçladým.
    {
        int tmpArr[i]; // tmpArr adlý geçici bir dizi tanýmladým.
        tmpArr[i]=rand()%20; //0-20 arasýnda rastgele sayý üretip geçici diziye atadým.
        if((tmpArr[i]-tmpArr[i+1])>=5 || (tmpArr[i]-tmpArr[i+1])<=-5)
        {//if ile dizinin ardýþýk iki elemaný arasýndaki farkýnýn en az 5 olmasýný kontrol ettim.
            randArr[i]=tmpArr[i]; //koþul saðlanan elemanlarý randArr dizisine atadým.
            printf("%d \n",randArr[i]); //randArr dizisinin elemanlarýný diziye atadým.
        }

    }
    return randArr; //randArr dizisini geriye döndürdüm.
}

int main()
{
    int randArray[10]; //randArray adlý dizi tanýmladým.
    randNum(randArray); //randNum fonksiyonuna parametre olarak randArray  dizisini verdim.
}
