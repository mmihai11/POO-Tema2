    for(int i = 0; i < avg.size(); i++)
        averageValue += avg[i];
    averageValue = averageValue/avg.size();


    for(int i = 0; i < colors.size(); i++)
        if(avg[i] > averageValue)
            hashbit.push_back(true);
        else
            hashbit.push_back(false);
}
//dasdasdsasadasssss
