var addon = require('bindings')('objwrap');

describe('ObjWrap', function(){
  it('is real', function(done){
    var ObjWrap = addon.ObjWrap;
    var obj = new ObjWrap();
    (typeof obj == 'object').should.be.true;
    (obj instanceof ObjWrap).should.be.true;
    done();
  });
});
