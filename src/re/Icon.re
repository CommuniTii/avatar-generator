let component = ReasonReact.statelessComponent("Icon")

let make = (~style=?, ~name, _children) => {
  ...component,
    render: _self => switch(name) {
      | "arrow" =>
        <svg
          className="IconLink-icon"
          style=?style
          height="12"
          viewBox="0 0 12 12"
          width="12"
          xmlns="http://www.w3.org/2000/svg">
          <path
            d="m6.67157288 6-4.29289322-4.29289322c-.3905243-.39052429-.3905243-1.02368927 0-1.41421356.39052429-.39052429 1.02368927-.39052429 1.41421356 0l5.70710678 5.70710678-5.70710678 5.7071068c-.39052429.3905243-1.02368927.3905243-1.41421356 0-.3905243-.3905243-.3905243-1.0236893 0-1.4142136z"
            fill="#5a45ff"
          />
        </svg>
      | "randomize" => 
        <svg
          className="IconLink-icon"
          style=?style
          height="16"
          viewBox="0 0 16 16"
          width="16"
          xmlns="http://www.w3.org/2000/svg">
          <path
            d="m457.5 1016c-.276142 0-.5-.22386-.5-.5s.223858-.5.5-.5h4.5v4.5c0 .27614-.223858.5-.5.5s-.5-.22386-.5-.5v-2.82637c-2.364947 1.12347-4 3.53397-4 6.32637 0 3.69788 2.867362 6.72604 6.5 6.98242v.01758c.276142 0 .5.22386.5.5s-.223858.5-.5.5c-.056943 0-.111664-.00952-.162656-.02705-4.108263-.33686-7.337344-3.77781-7.337344-7.97295 0-3.01203 1.664575-5.63527 4.123993-7zm13 14c.276142 0 .5.22386.5.5s-.223858.5-.5.5h-4.5v-4.5c0-.27614.223858-.5.5-.5s.5.22386.5.5v2.82637c2.364947-1.12347 4-3.53397 4-6.32637 0-3.69788-2.867362-6.72604-6.5-6.98242v-.01758c-.276142 0-.5-.22386-.5-.5s.223858-.5.5-.5c.056943 0 .111664.00952.162656.02705 4.108263.33686 7.337344 3.77781 7.337344 7.97295 0 3.01203-1.664575 5.63527-4.123993 7z"
            fill="#5a45ff"
            transform="translate(-456 -1015)"
          />
        </svg>
      | _ => ReasonReact.null
    }
}
