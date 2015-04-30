var bindings = require('bindings');
var addon = bindings('heroku_native_hello');

// TODO: make this work on npm somehow

exports.topics = [{
  name: 'native',
  description: 'demo plugin to call native c++ code'
}];

exports.commands = [{
  topic: 'native',
  command: 'hello',
  run: function () {
    console.log("message from native code:", addon.hello());
  }
}];
