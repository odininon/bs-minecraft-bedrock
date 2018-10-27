type client;
type server;
type system;

[@bs.val] [@bs.scope "client"]
external client_system : (int, int) => system = "registerSystem";

[@bs.val] [@bs.scope "server"]
external server_system : (int, int) => system = "registerSystem";
