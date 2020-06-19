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
  {
    name: "navIcon",
    styles: ReactDOMRe.Style.make(~color="#ffffff", ~marginRight="10px", ()),
  },
  {name: "mainPaper", styles: ReactDOMRe.Style.make(~paddingTop="76px", ())},
  {
    name: "footer",
    styles:
      ReactDOMRe.Style.make(
        ~paddingTop="76px",
        ~paddingBottom="12px",
        ~color="rgba(0, 0, 0, 0.54)",
        (),
      ),
  },
];