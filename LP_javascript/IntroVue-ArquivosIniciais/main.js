import productDisplayComponent from "./ProductDisplay.js";

const app = Vue.createApp({
    data() {
        return {
            carrinho: 0,
            premium: true
        }
    },
    components: {
        'product-display': productDisplayComponent
    }
    
})

//Monta o app
const mountedApp = app.mount('#app');

