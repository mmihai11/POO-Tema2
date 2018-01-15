double getHammingDistance(vector <bool> v1, vector <bool> v2)
{
    // am adaugat un comm // 
    int hammingDistanceValue = 0;
    for(int i = 0; i < v1.size(); i++)
        if(v1[i] != v2[i])
            hammingDistanceValue++;
    return (double)((double)hammingDistanceValue/v1.size());
}
