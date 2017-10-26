long long simpleCheckSum(char *s, int size)
{
    long long chkSum = 0;
    // long long chkSum2 = 0;

    for (int i = 0; i < size; i++){
        chkSum += (s[i] * i);
        // chkSum2 += (msg->ucData[i] * i);
    }

    // printf("TESTE %s\n", msg->ucData);
    return chkSum;
}
