#!/bin/bash

cp ./ConvertImage.h ../InvokeConvertImage/ConvertImage.h;
cp ./IConvertImage.h ../InvokeConvertImage/IConvertImage.h;
cp ./IPO.h ../InvokeConvertImage/IPO.h;
cp ./IEO.h ../InvokeConvertImage/IEO.h;
cp ./main.cpp ../InvokeConvertImage/main.cpp;
sudo ln -sf /home/ayamir/CLionProjects/ConvertImage/libConvertImage.so /usr/local/lib/libConvertImage.so
