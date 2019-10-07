module F = Foo;
module B = Bar.Make(Foo);

Js.log(F.return);
Js.log(B.return);
