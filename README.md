# altpascal-compiler
A compiler made for study purposes, this document contains some description how languange works

### languange description
* Comments: are delimit by "/*" and "*/". Everything follow by "/*" is ignored and stop ignore when found "*/".
```c
    /* comment */
```

* Identifiers (vars): can be made with alpha-numerics and underline char (if no match with any reserved word, and don't start with numerics digits).
##### ok
```txt
    Value
    company_number
    _12val
```
##### wrong
```txt
    var
    ex$
    company-number
    12val
```

* Types
  * int
  * bool (true | false)

* Operators
  * "+"
  * "-"
  * "/"
  * "*"
  * "and"
  * "or"
  * "not"
  * ">"
  * "<"
  * "<>"    -- different
  * "="     -- equals
  * "<="
  * ">="
  * ":="    -- assign

* Delimiters are 
  * "(" start expression
  * ")" end expression
  * "," separate expression
  * ":" separate type
  * "." separate decimal
  * ";" end line

* reserved words
  * program
  * begin
  * end
  * procedure
  * if
  * then
  * else
  * while
  * do
  * and
  * or
  * not
  * var
  * int
  * bool
  * true
  * false
  * write