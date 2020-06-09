type style = {
  name: String.t,
  styles: ReactDOMRe.Style.t,
};

let classes: list(MaterialUi_WithStyles.style) = [
  {
    name: "buttonMargin",
    styles: ReactDOMRe.Style.make(~marginLeft="6px", ~marginRight="6px", ()),
  },
  {
    name: "pageTopMargin",
    styles: ReactDOMRe.Style.make(~marginTop="7vh", ()),
  },
];