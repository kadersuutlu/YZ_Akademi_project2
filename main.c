#include <stdio.h>
#include <stdlib.h>

//randNum fonksiyonu tan�mlay�p fonksiyonda tan�mlad���m randArr dizisini d�nd�rmesi i�in *p pointer parametresi tan�mlad�m.
int randNum(int *p)
{
    int randArr[10]; //10 elemanl� randArr adl� bir dizi tan�mlad�m.
    srand(time(NULL)); //Dizi elemanlar�n�n her seferinde farkl� olmas� i�in srand fonksiyonunu kulland�m.
    for(int i=1; i<=10; i++) //bu d�ng�yle dizi eleman� 10 olana kadar rastgele say� �retmeyi ama�lad�m.
    {
        int tmpArr[i]; // tmpArr adl� ge�ici bir dizi tan�mlad�m.
        tmpArr[i]=rand()%20; //0-20 aras�nda rastgele say� �retip ge�ici diziye atad�m.
        if((tmpArr[i]-tmpArr[i+1])>=5 || (tmpArr[i]-tmpArr[i+1])<=-5)
        {//if ile dizinin ard���k iki eleman� aras�ndaki fark�n�n en az 5 olmas�n� kontrol ettim.
            randArr[i]=tmpArr[i]; //ko�ul sa�lanan elemanlar� randArr dizisine atad�m.
            printf("%d \n",randArr[i]); //randArr dizisinin elemanlar�n� diziye atad�m.
        }

    }
    return randArr; //randArr dizisini geriye d�nd�rd�m.
}

int main()
{
    int randArray[10]; //randArray adl� dizi tan�mlad�m.
    randNum(randArray); //randNum fonksiyonuna parametre olarak randArray  dizisini verdim.
}
