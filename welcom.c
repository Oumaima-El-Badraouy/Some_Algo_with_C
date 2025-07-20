#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

// FoundOccurance:
// تحيد تكرار حرف 'a' من النص الأصلي وتخزن النتيجة في مصفوفة جديدة، وتطبع النص الناتج بدون تكرار الحرف أكثر من مرة.
void FoundOccurance(){
    // ...
}

// BnarytoDecimal:
// يحول مصفوفة أرقام ثنائية (0 و1) إلى عدد عشري ويطبعه.
void BnarytoDecimal(){
    // ...
}

// Yearleap:
// يتحقق إذا كانت السنة كبيسة (leap year) ويطبع النتيجة.
void Yearleap(int year){
    // ...
}

// VectoreADD:
// يجمع عنصر بعنصر بين مصفوفتين ويطبع النتيجة.
void VectoreADD(int arry[],int arry1[],int arrysize){
    // ...
}

// VectoreDot:
// يحسب حاصل الضرب العنصري (dot product) بين مصفوفتين ويطبع النتيجة.
void VectoreDot(int arry[],int arry1[],int arrysize){
    // ...
}

// RandomNumber:
// يولد رقم عشوائي بين 1 و 6 ويطبعه.
void RandomNumber(){
    // ...
}

// ReverseArray:
// يعكس ترتيب عناصر مصفوفة ويطبعها.
void ReverseArray(){
    // ...
}

// Ajoutersurarray:
// يضيف رقم عشوائي في نهاية مصفوفة ويطبعها.
void Ajoutersurarray(){
    // ...
}

// Ajoutersurstring:
// يلصق نص إلى نص آخر ويضيف حرف جديد في النهاية ثم يطبع النتيجة.
void Ajoutersurstring(){
    // ...
}

// Uppertolowerorlowertoupper:
// يحول حرف صغير إلى كبير والعكس ويطبعهم.
void Uppertolowerorlowertoupper(){
    // ...
}

// FibonacciSequence:
// يطبع سلسلة فيبوناتشي حتى n رقم.
void FibonacciSequence(int n){
    // ...
}

// CountVowels:
// يحسب عدد الحروف المتحركة المشتركة بين نصين ويطبع الناتج.
void CountVowels(){
    // ...
}

// Minimumnumber:
// يطبع أصغر رقم في مصفوفة.
void Minimumnumber(){
    // ...
}

// MaxNumber:
// يطبع أكبر رقم في مصفوفة.
void MaxNumber(){
    // ...
}

// CounterOccurance:
// يحسب عدد مرات ظهور رقم معين في مصفوفة ويطبع النتيجة.
void CounterOccurance(){
    // ...
}

// StringPol:
// يتحقق إذا كانت سلسلة نصية هي باليندروم (Palindrome) ويطبع النتيجة.
void StringPol(char var[]){
    // ...
}

// Arraysum:
// يحسب مجموع عناصر مصفوفة ويطبعه.
void Arraysum(int array1[],int sizee){
    // ...
}

// Arrayavg:
// يحسب متوسط عناصر مصفوفة ويطبعه.
void Arrayavg(int array1[],int sizee){
    // ...
}

// Celsiustofehrniet:
// يحول درجة حرارة من سلسيوس إلى فهرنهايت ويطبع النتيجة.
void Celsiustofehrniet(float Celsius){
    // ...
}

// Copyarray:
// ينسخ محتويات مصفوفة إلى أخرى ويطبعها.
void Copyarray(){
    // ...
}
int main(){
    BnarytoDecimal();
    FoundOccurance();
    int arr[]={1,2,3};
    int arr2[]={1,2,3};
    int arrysize=sizeof(arr)/sizeof(arr[0]);
    VectoreDot(arr,arr2,arrysize);
    VectoreADD(arr,arr2,arrysize);
    Yearleap(2025);
    Copyarray();
    int var[]={1,2,3};
    int sizee=sizeof(var)/sizeof(var[0]);
    Arraysum(var,sizee);
    Arrayavg(var,sizee);
    Celsiustofehrniet(60);
    FibonacciSequence(5);
    StringPol("anna");
    CountVowels();
    // CounterOccurance();

    srand(time(0));
    Ajoutersurarray();
    Uppertolowerorlowertoupper();
    return 0;
};
