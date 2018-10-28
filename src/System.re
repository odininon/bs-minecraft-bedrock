type t;

[@bs.set] external set_update: (t, unit => unit) => unit = "update";

[@bs.set] external set_initialize: (t, unit => unit) => unit = "initialize";

[@bs.send]
external broadcast_event: (t, string, 'a) => unit = "broadcastEvent";

[@bs.send]
external listen_for_event: (t, string, 'a => unit) => unit = "listenForEvent";