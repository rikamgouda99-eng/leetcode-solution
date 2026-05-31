bool asteroidsDestroyed(int mass, int* asteroids, int asteroidsSize)
{
    long long cmass = mass;
    int count = 0;

    for(int i = 0; i < asteroidsSize; i++)
    {
        if(cmass >= asteroids[i])
        {
            cmass += asteroids[i];
            asteroids[i] = 0;
        }
        else
            count++;
    }

    while(count > 0)
    {
        int temp = 0;

        for(int i = 0; i < asteroidsSize; i++)
        {
            if(asteroids[i] != 0)
            {
                if(cmass >= asteroids[i])
                {
                    cmass += asteroids[i];
                    asteroids[i] = 0;
                }
                else
                    temp++;
            }
        }

        if(temp == count)
            return false;

        count = temp;
    }

    return true;
}