type height =
  | Auto
  | Pct(float)
  | Px(int)
  | Zero;

let unwrapHeight =
  fun
  | Auto => "auto"
  | Pct(percent) => {j|$(percent)%|j}
  | Px(pixel) => {j|$(pixel)px|j}
  | Zero => "0";

type easing =
  | Ease
  | Linear
  | EaseIn
  | EaseOut
  | EaseInOut
  | CubicBezier(float, float, float, float);

let unwrapEasing =
  fun
  | Ease => "ease"
  | Linear => "linear"
  | EaseIn => "ease-in"
  | EaseOut => "ease-out"
  | EaseInOut => "ease-in-out"
  | CubicBezier(x1, y1, x2, y2) => {j|cubic-bezier($y1, $y2, $x1, $x2)|j};