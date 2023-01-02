# Val's Keymap for the Idobo

It's Plancky -- there are raise and lower keys that are used to access keys that
are out of reach normally. Anything to the right of `p`, `;`, or `/` is only
accessible via raise or lower. The layout is mostly copied with Planck's
semantics in mind.

```
// ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
// │ ! │ @ │ # │ $ │ % │ ^ │ & │ * │ ( │ ) │
// │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │
// │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │
// └───┴───┴───┴───┴───┴───┴───┴───┴───┴───┘
// ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
// │   │   │   │   │   │ | │ _ │ + │ { │ } │
// │ A │ S │ D │ F │ G │ H │ J │ K │ L │ ; │
// │   │   │   │   │   │ \ │ - │ = │ [ │ ] │
// └───┴───┴───┴───┴───┴───┴───┴───┴───┴───┘
// ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
// │   │   │   │   │   │   │ ~ │   │   │   │
// │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ / │
// │   │   │   │   │   │   │ ` │   │   │   │
// └───┴───┴───┴───┴───┴───┴───┴───┴───┴───┘
```

That grid has a single-key border. The top row is the standard number row and the other three contain modifiers, deletes, space, raise, lower, meta, super, shift and the rest! The corners can be doubletapped to lock the `fn` layer **(which is momentarily accessible via a hold of the spacebar)**.

As mentioned, there is still a number row (it actually raise/lowers to the F-keys) but once I get some custom keycaps they're getting replaced.

## Macro Script

There are a series of fixed-width helpers in `macro-keymap.h` that I use to
create a highly legible `macro-keymap.c`. QMK does a good job of provided fixed
width (7 characters, almost always prefixed with `KC_` for 4 characters of
"address space") key codes. My macros are aligned to 8 characters (to account
for the comma) so that the keymap forms a nice grid, matching the ortholinear
layout quite nicely. 😁

In order to stay out of the way of the QMK build process, I've added a
script to sync `macro-keymap.c` with `keymap.c` using `gcc`. Call it from
the keymap directory to sync your changes before building as usual.
