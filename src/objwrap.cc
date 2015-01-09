#include <node.h>
#include "./objwrap_obj.h"

using namespace v8;

void Init(Handle<Object> exports) {
  ObjWrap::Init(exports);  
}

NODE_MODULE(objwrap, Init);
