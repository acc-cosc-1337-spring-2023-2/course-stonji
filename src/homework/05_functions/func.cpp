//add include statements
#include "func.h"
//add function code here
double get_gc_content(const string& dna)
{
    auto cgCount = 0.0;

    for (char nBase : dna)
    {
        if(nBase == 'G' || nBase == 'C')
        {
            cgCount++;
        }
    }

    return cgCount / dna.length();
}

string reverse_string(string dna)
{
    string reverseDNA;

    for(int i = dna.length() - 1; i >= 0; i--)
    {
        reverseDNA += dna[i];
    }
    
    return reverseDNA;
}

string get_dna_complement(string dna)
{
    string complement;
    string reverseDNA = reverse_string(dna);
        for (char nBase : reverseDNA)
        {
            switch(nBase)
            {
                case 'A':
                    complement += 'T';
                    break;
                case 'T':
                    complement += 'A';
                    break;
                case 'C':
                    complement += 'G';
                    break;
                case 'G':
                    complement += 'C';
                    break;
                default:
                    break;
            }
        }

    return complement;
}