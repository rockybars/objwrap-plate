#include "objwrap_obj.h"

ObjWrap::ObjWrap(){}
ObjWrap::~ObjWrap(){}

Persistent<Function> ObjWrap::constructor;

NAN_METHOD(ObjWrap::New) {
  NanScope();
  if (args.IsConstructCall()) {
    ObjWrap *obj = new ObjWrap();
    obj->Wrap(args.This());
    NanReturnValue(args.This());
  }
  NanReturnValue(NanNew(constructor)->NewInstance());
}

void ObjWrap::Init(Handle<Object> exports) {
  Local<FunctionTemplate> tpl = NanNew<FunctionTemplate>(New);
  tpl->SetClassName(NanNew("ObjWrap"));
  tpl->InstanceTemplate()->SetInternalFieldCount(1);
  NanAssignPersistent<Function>(constructor, tpl->GetFunction());
  exports->Set(NanNew("ObjWrap"), tpl->GetFunction());
}
