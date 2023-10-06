#include<iostream>
#include<string>

using namespace std;

//Muc tu trong tu dien
struct MucTu
{
    string tuTiengAnh;
    string nghiaTiengViet;
};

struct TuDien
{
    MucTu *table;//con tro toi bang bam
    int tableSize;//kich thuoc bang bam
    bool *trong;
};

int hamBam(string tuTiengAnh,int tableSize)
{
    int hashVal =0;
    for (int i = 0; i < tuTiengAnh.size(); i++)
    {
        hashVal+=tuTiengAnh[i];
    }
    return hashVal%tableSize;
}
