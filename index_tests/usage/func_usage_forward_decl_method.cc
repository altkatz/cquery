struct Foo {
  void foo();
};

void usage() {
  Foo* f = nullptr;
  f->foo();
}
/*
OUTPUT:
{
  "includes": [],
  "skipped_by_preprocessor": [],
  "types": [{
      "id": 0,
      "usr": "c:@S@Foo",
      "short_name": "Foo",
      "detailed_name": "Foo",
      "definition_spelling": "1:8-1:11",
      "definition_extent": "1:1-3:2",
      "parents": [],
      "derived": [],
      "types": [],
      "funcs": [0],
      "vars": [],
      "instances": [0],
      "uses": ["1:8-1:11", "6:3-6:6"]
    }],
  "funcs": [{
      "id": 0,
      "is_operator": false,
      "usr": "c:@S@Foo@F@foo#",
      "short_name": "foo",
      "detailed_name": "void Foo::foo()",
      "declarations": [{
          "spelling": "2:8-2:11",
          "extent": "2:3-2:13",
          "content": "void foo()",
          "param_spellings": []
        }],
      "declaring_type": 0,
      "base": [],
      "derived": [],
      "locals": [],
      "callers": ["1@7:6-7:9"],
      "callees": []
    }, {
      "id": 1,
      "is_operator": false,
      "usr": "c:@F@usage#",
      "short_name": "usage",
      "detailed_name": "void usage()",
      "declarations": [],
      "definition_spelling": "5:6-5:11",
      "definition_extent": "5:1-8:2",
      "base": [],
      "derived": [],
      "locals": [],
      "callers": [],
      "callees": ["0@7:6-7:9"]
    }],
  "vars": [{
      "id": 0,
      "usr": "c:func_usage_forward_decl_method.cc@53@F@usage#@f",
      "short_name": "f",
      "detailed_name": "Foo *f",
      "definition_spelling": "6:8-6:9",
      "definition_extent": "6:3-6:19",
      "variable_type": 0,
      "cls": 1,
      "uses": ["6:8-6:9", "7:3-7:4"]
    }]
}
*/
