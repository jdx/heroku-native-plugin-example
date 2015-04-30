{
  "targets": [
    {
      "target_name": "heroku_native_hello",
      "sources": ["hello.cc"],
      "include_dirs": ["<!(node -e \"require('nan')\")"]
    }
  ]
}
