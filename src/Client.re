type t;

[@bs.val] [@bs.scope "client"]
external register_system: (int, int) => System.t = "registerSystem";