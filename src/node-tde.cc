#include <node.h>
#include "TableauExtract.h"
#include "TableauTableDefinition.h"
#include "TableauRow.h"
#include "TableauServerConnection.h"

namespace NodeTde {

using v8::Local;
using v8::Object;

void InitAll(Local<Object> exports) {
  Extract::Init(exports);
  TableDefinition::Init(exports);
  Row::Init(exports);
  ServerConnection::Init(exports);
}

NODE_MODULE(tableau, InitAll)

}
