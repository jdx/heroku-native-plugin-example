#include <nan.h>

using namespace v8;

NAN_METHOD(Hello) {
  NanScope();
  Local<String> str = NanNew<String>("hello");
  NanReturnValue(str);
}

void Init(Local<Object> exports) {
  exports->Set(NanNew("hello"), NanNew<FunctionTemplate>(Hello)->GetFunction());
}

NODE_MODULE(heroku_native_hello, Init)
