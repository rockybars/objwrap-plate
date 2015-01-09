{ 
  "targets": [
    {
      "target_name": "objwrap",
      "sources": [
        "src/objwrap.cc", "src/objwrap_obj.cc"
      ],
      "include_dirs": [
        "src", 
        "<!(node -e \"require('nan')\")" 
      ]
    }
  ]
}
