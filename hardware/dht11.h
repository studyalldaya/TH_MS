#ifndef __DHT11_H
#define __DHT11_H

#ifdef __cplusplus
extern "C"
{
#endif

    int dht11_get_data(unsigned char *humi, unsigned char *temp);

#ifdef __cplusplus
}
#endif

#endif