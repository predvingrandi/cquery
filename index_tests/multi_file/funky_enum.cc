enum Foo {
#include "funky_enum.h"
};

/*
// TODO: In the future try to have better support for types defined across
// multiple files.

OUTPUT: funky_enum.h
{
  "includes": [],
  "skipped_by_preprocessor": [],
  "types": [{
      "id": 0,
      "usr": 16985894625255407295,
      "short_name": "Foo",
      "detailed_name": "Foo",
      "kind": 0,
      "parents": [],
      "derived": [],
      "types": [],
      "funcs": [],
      "vars": [0, 1, 2],
      "instances": [],
      "uses": []
    }],
  "funcs": [],
  "vars": [{
      "id": 0,
      "usr": 439339022761937396,
      "short_name": "A",
      "detailed_name": "Foo::A",
      "kind": 15,
      "storage": 0,
      "hover": "Foo::A = 0",
      "declarations": [],
      "definition_spelling": "4:1-4:2",
      "definition_extent": "4:1-4:2",
      "variable_type": 0,
      "uses": []
    }, {
      "id": 1,
      "usr": 15962370213938840720,
      "short_name": "B",
      "detailed_name": "Foo::B",
      "kind": 15,
      "storage": 0,
      "hover": "Foo::B = 1",
      "declarations": [],
      "definition_spelling": "5:1-5:2",
      "definition_extent": "5:1-5:2",
      "variable_type": 0,
      "uses": []
    }, {
      "id": 2,
      "usr": 8524995777615948802,
      "short_name": "C",
      "detailed_name": "Foo::C",
      "kind": 15,
      "storage": 0,
      "hover": "Foo::C = 2",
      "declarations": [],
      "definition_spelling": "6:1-6:2",
      "definition_extent": "6:1-6:2",
      "variable_type": 0,
      "uses": []
    }]
}
OUTPUT: funky_enum.cc
{
  "includes": [{
      "line": 1,
      "resolved_path": "&funky_enum.h"
    }],
  "skipped_by_preprocessor": [],
  "types": [{
      "id": 0,
      "usr": 16985894625255407295,
      "short_name": "Foo",
      "detailed_name": "Foo",
      "kind": 5,
      "definition_spelling": "1:6-1:9",
      "definition_extent": "1:1-3:2",
      "parents": [],
      "derived": [],
      "types": [],
      "funcs": [],
      "vars": [],
      "instances": [],
      "uses": ["1:6-1:9"]
    }],
  "funcs": [],
  "vars": []
}
*/