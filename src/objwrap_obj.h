#ifndef OBJWRAP_OBJ_H
#define OBJWRAP_OBJ_H

#include <node.h>
#include <nan.h>

using namespace v8;

class ObjWrap : node::ObjectWrap {

private:
  ObjWrap();
  ~ObjWrap();

  static NAN_METHOD(New);

public:
  static void Init(Handle<Object>);
  static Persistent<Function> constructor;

};
#endif

