#include "init_test.h"
void init(v8::Handle<v8::Object> exports,
          v8::Handle<v8::Object> module,
          v8::Handle<v8::Context> context,
          void * priv) {
  node::test::setInitTag(exports);
}
NODE_MODULE(NODE_TEST_ADDON_NAME, init)