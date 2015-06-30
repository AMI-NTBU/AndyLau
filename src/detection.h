
#ifndef _USB_DETECTION_H
#define _USB_DETECTION_H

#include <node.h>
#include <v8.h>
#include <uv.h>
#include <list>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <nan.h>

#include "deviceList.h"

void Find(const v8::FunctionCallbackInfo<v8::Value>& args);
void EIO_Find(uv_work_t* req);
void EIO_AfterFind(uv_work_t* req);
void InitDetection();
void StartMonitoring(const v8::FunctionCallbackInfo<v8::Value>& args);
void Start();
void StopMonitoring(const v8::FunctionCallbackInfo<v8::Value>& args);
void Stop();
void getMountPathFromList(char* mountPath);


struct ListBaton
{
public:
    //v8::Persistent<v8::Function> callback;

    NanCallback*                   callback;
    std::list<ListResultItem_t*>   results;
    char                           errorString[1024];
    int                            vid;
    int                            pid;
};

void RegisterAdded(const v8::FunctionCallbackInfo<v8::Value>& args);
void NotifyAdded(ListResultItem_t* it);
void RegisterRemoved(const v8::FunctionCallbackInfo<v8::Value>& args);
void NotifyRemoved(ListResultItem_t* it);

#endif
