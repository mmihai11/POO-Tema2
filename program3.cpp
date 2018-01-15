ofstream out("date.out");
void getHashBit(CImg <unsigned char> image, vector <bool> &hashbit)
{
    vector <double> colors, avg;
    double averageValue = 0;

    double w = image.width(), h = image.height(), sum = 0;

    for(int i = 0; i < w; i++)
    {
        sum = 0;
        for(int j = 0; j < h; j++)
            sum += colorPixel(image,i,j);
        colors.push_back(sum);
        avg.push_back(sum/h*1.0);
    }

    for(int i = 0; i < avg.size(); i++)
        averageValue += avg[i];
    averageValue = averageValue/avg.size();


    for(int i = 0; i < colors.size(); i++)
        if(avg[i] > averageValue)
            hashbit.push_back(true);
        else
            hashbit.push_back(false);
}
}
